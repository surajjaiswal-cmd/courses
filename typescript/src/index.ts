let input = document.querySelector(".input-value") as HTMLInputElement;
let submitForm = document.querySelector(".form") as HTMLFormElement;
let mainBox = document.querySelector(".main-box") as HTMLDivElement;
let notfound = document.querySelector(".no-matech-error") as HTMLHeadingElement;

interface UserData {
  login: string;
  avatar_url: string;
  url: string;
}

async function fetchData<T>(url: string): Promise<T> {
  let res = await fetch(url);
  if (!res.ok) {
    throw new Error(`HTTP error! status: ${res.status}`);
  }
  let data = await res.json();
  return data;
}

function showResult(user: UserData) {
  const { login, avatar_url, url } = user;
  mainBox.innerHTML += `
    <div class="card-view">
      <img src="${avatar_url}" alt="${login}" class="w-100 h-auto">
      <div>
        <img src="${avatar_url}" alt="${login}" class="w-25 p-3">
        <h5 class="ms-2">${login}</h5>
        <a href="${url}" target="_blank" class="btn ms-5">View Profile</a>
      </div>
    </div>
  `;
}

function fetchUserData(url: string) {
  fetchData<UserData[]>(url)
    .then((userInfo) => {
      mainBox.innerHTML = "";

      const filteredUsers = userInfo.filter((user) =>
        user.login.toLowerCase().includes(input.value.toLowerCase())
      );
      if (filteredUsers.length === 0) {
        notfound.innerHTML = `no match found`;
        return;
      }
      filteredUsers.forEach((user) => {
        showResult(user);
      });
    })
    .catch((error) => {
      console.error("Error fetching user data:", error);
    });
}

input.addEventListener("input", (event) => {
  fetchUserData("https://api.github.com/users");
});
fetchUserData("https://api.github.com/users");
