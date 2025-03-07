//to disaplay bloke header on top in 700px=========================
changeHeader();
function changeHeader() {
  let header = document.getElementById("mainHeader");
  let sticky = header.offsetTop;
  window.onscroll = function () {
    if (window.pageYOffset > sticky + 990) {
      header.classList.add("sticky-header");
    } else {
      header.classList.remove("sticky-header");
    }
  };
}

//to create product card for section 2 5 and 9
function DynamicCard(productCards, str, start, end) {
  productCards.innerHTML = "";
  for (let i = start; i < end; i++) {
    const item = items[i];
    productCards.innerHTML += `
      <div class="${str} bg-light rounded mx-2 text-center" id="${item.id}">
        <a href="#"><img class="s2-card-img" src="${item.image}" alt="Product Image"></a>
        <div class="img-details mb-2 rounded">
          <h6 class="pt-2">${item.name}</h6>
          <p class="s2-price">Rs. ${item.price} <strike class="text-muted">Rs. ${item.actualprice}</strike></p>
          <p class="mt-1">${item.rating}</p>
          <p>${item.extrainfo}</p>
          <button type="button" class="s2-buyitnow" onclick="addToCart('${item.id}')">BUY IT NOW</button>
        </div>
      </div>`;
  }
}

// For section 2 top selling cards=========================
const topSellingCards = document.querySelector(".s2-card-part");
DynamicCard(topSellingCards, "s2-card", 0, 4);

// section 3 top categories ============================
s3Daynamic();
function s3Daynamic() {
  let topCategories = document.querySelector(".s3-inner");
  topCategories.innerHTML = "";
  s3SlidesData.forEach((slide) => {
    topCategories.innerHTML += `
    <div class="carousel-item ${slide.isActive}">
     <img src="${slide.imgSrc}" class="s3-slide img-fluid">
            <img src="${slide.imgCutSrc}" class="s31-slide img-fluid">
            <div class="carousel-caption">
              <p>${slide.caption}</p>
            <a href="#" class="s3-buy-button"> BUY NOW</a>
        </div>
    </div>`;
  });
}

// section 4 hammer grab list==============================
s4Daynamic();
function s4Daynamic() {
  let grabList1 = document.querySelector(".s4-inner-1");
  grabList1.innerHTML = "";
  for (let i = 0; i < 3; i++) {
    const slide = s4SlideData[i];
    grabList1.innerHTML += `<div class="carousel-item 1.1 ${slide.active}">
    <div class="row">
      <div class="col-6">
        <div class="s4-img-div">
          <a href="#"><img class="s4-slide-img" src="${slide.img1}" alt="section-4 slide imgs"></a>
          <div class="carousel-caption">
            <p class="s4-big-img-details ${slide.textColor1} ">${slide.img1info}</p>
            <button type="button" class="s4-shop-now">Shop Now</button>
          </div>
        </div>
      </div>
      <div class="col-6">
        <div class="row">
          <div class="col">
            <div class="s4-img-div">
              <a href="#"><img class="s4-slide-img" src="${slide.img2}" alt="section-4 slide imgs"></a>
              <div class="carousel-caption">
                <p class="s4-small-img-details ${slide.textColor2} ">${slide.img2info}</p>
                <button type="button" class="s4-shop-now">Shop Now</button>
              </div>
            </div>
          </div>
          <div class="col">
            <div class="s4-img-div">
              <a href="#"><img class="s4-slide-img" src="${slide.img3}" alt="section-4 slide imgs"></a>
              <div class="carousel-caption">
                <p class="s4-small-img-details ${slide.textColor3} ">${slide.img3info}</p>
                <button type="button" class="s4-shop-now">Shop Now</button>
              </div>
            </div>
          </div>
        </div>
        <div class="row mt-4">
          <div class="col">
            <div class="s4-img-div">
              <a href="#"><img class="s4-slide-img" src="${slide.img4}" alt="section-4 slide imgs"></a>
              <div class="carousel-caption">
                <p class="s4-small-img-details ${slide.textColor4} ">${slide.img4info}</p>
                <button type="button" class="s4-shop-now">Shop Now</button>
              </div>
            </div>
          </div>
          <div class="col">
            <div class="s4-img-div">
              <a href="#"><img class="s4-slide-img" src="${slide.img5}" alt="section-4 slide imgs"></a>
              <div class="carousel-caption">
                <p class="s4-small-img-details ${slide.textColor5} ">${slide.img5info}</p>
                <button type="button" class="s4-shop-now">Shop Now</button>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>`;
  }

  let grabList2 = document.querySelector(".s4-inner-2");
  grabList2.innerHTML = "";
  for (let i = 3; i < 6; i++) {
    const slide = s4SlideData[i];
    grabList2.innerHTML += `
  <div class="carousel-item 2.2 ${slide.active}">
   <div class="row">
     <div class="col">
       <div class="s4-img-div">
         <a href="#"><img class="s4-slide-img" src="${slide.img1}" alt="section-4 slide imgs"></a>
         <div class="carousel-caption">
           <p class="s4-big-img-details ${slide.textColor1}">${slide.img1info}</p>
           <button type="button" class="s4-shop-now">Shop Now</button>
         </div>
       </div>
     </div>
   </div>
   <div class="row mt-4">
     <div class="col">
       <div class="s4-img-div">
         <a href="#"><img class="s4-slide-img" src="${slide.img2}" alt="section-4 slide imgs"></a>
         <div class="carousel-caption">
           <p class="s4-small-img-details ${slide.textColor2}">${slide.img2info}</p>
           <button type="button" class="s4-shop-now">Shop Now</button>
         </div>
       </div>
     </div>
     <div class="col"2>
       <div class="s4-img-div">
         <a href="#"><img class="s4-slide-img" src="${slide.img3}" alt="section-4 slide imgs"></a>
         <div class="carousel-caption">
           <p class="s4-small-img-details ${slide.textColor3}">${slide.img3info}</p>
           <button type="button" class="s4-shop-now">Shop Now</button>
         </div>
       </div>
     </div>
   </div>
   <div class="row mt-4">
     <div class="col">
       <div class="s4-img-div">
         <a href="#"><img class="s4-slide-img" src="${slide.img4}" alt="section-4 slide imgs"></a>
         <div class="carousel-caption">
           <p class="s4-small-img-details ${slide.textColor4}">${slide.img4info}</p>
 
           <button type="button" class="s4-shop-now">Shop Now</button>
         </div>
       </div>
     </div>
     <div class="col">
       <div class="s4-img-div">
         <a href="#"><img class="s4-slide-img" src="${slide.img5}" alt="section-4 slide imgs"></a>
         <div class="carousel-caption">
           <p class="s4-small-img-details ${slide.textColor5}">${slide.img5info}</p>
 
           <button type="button" class="s4-shop-now">Shop Now</button>
         </div>
       </div>
     </div>
   </div>
 </div>`;
  }
}
//section 5 featured collection ============================
let featuredCollectionCard = document.querySelector(".s5-card-part");
DynamicCard(featuredCollectionCard, "s5-card", 4, 12);

// for section 6 card collection=============================
// Function to dynamically create the cards and scroll and flipe
s6DynamicCard();
function s6DynamicCard() {
  let collectionListCard = document.querySelector(".s6-card-part");
  collectionListCard.innerHTML = "";
  s6items.forEach((item) => {
    let backCard = "";
    if (item.s6cardback) {
      item.s6cardback.forEach((backitem) => {
        backCard += `<a href="#">
          <div class="s6-card1" id="${backitem.id}">
            <img src="${backitem.img}" alt="slide back imgs">
            <div>
              <div class="s6-card-details">
                <p class="s6-card-title my-0">${backitem.name}</p>
                <p class="text-muted my-0">${backitem.extrainfo}</p>
                <p><strike class="text-muted my-0">Rs. ${backitem.actualprice}</strike> Rs. ${backitem.price}</p>
              </div>
            </div>
          </div>
        </a>`;
      });
    }
    collectionListCard.innerHTML += `
      <div class="card-container" id="${item.id}">
        <div class="s6-card">
          <div class="card-side card-front">
            <img class="s6-card-img" src="${item.img}" alt="ACE 2">
            <button type="button" class="s6-quickview">Quick View</button>
          </div>
          <div class="card-side card-back">
            ${backCard}
            <div class="row">
              <a href="#" class="col text-center mt-1">
                <h6>see more</h6>
              </a>
            </div>
            <button type="button" class="s6-backreturn">✕</button>
          </div>
        </div>
      </div>`;
  });

  // Horizontal scrolling
  scrollLeftSide(collectionListCard);
  function scrollLeftSide(scroll) {
    let isDown = false;
    let startX;
    let scrollLeft;

    scroll.addEventListener("mousedown", (e) => {
      isDown = true;
      startX = e.pageX - scroll.offsetLeft;
      scrollLeft = scroll.scrollLeft;
      e.preventDefault(); // Prevent default action (context menu)
    });

    scroll.addEventListener("mouseleave", () => {
      isDown = false;
    });

    scroll.addEventListener("mouseup", () => {
      isDown = false;
    });

    scroll.addEventListener("mousemove", (e) => {
      if (isDown) {
        let x = e.pageX - scroll.offsetLeft;
        const walk = x - startX;
        scroll.scrollLeft = scrollLeft - walk;
      }
    });
  }
  rotetcart();
  // to rotate cart 180 deegre
  function rotetcart() {
    let activeCard = null;
    document.querySelectorAll(".s6-quickview").forEach((container) => {
      container.addEventListener("click", function (e) {
        e.stopPropagation();
        const currentCard = this.closest(".s6-card");

        if (activeCard && activeCard !== currentCard) {
          activeCard.classList.remove("flipped");
        }
        currentCard.classList.toggle("flipped");

        activeCard = currentCard.classList.contains("flipped")
          ? currentCard
          : null;
      });
    });
    // Flip back any active card when clicking backside X button
    document.querySelectorAll(".s6-backreturn").forEach((container) => {
      container.addEventListener("click", function () {
        if (activeCard) {
          activeCard.classList.remove("flipped");
          activeCard = null;
        }
      });
    });
  }
}

// for section 7 img comparison========================
imgComparison();
function imgComparison() {
  const slider = document.querySelector(".image-comparison .slider");
  const beforeImage = document.querySelector(".image-comparison .before-image");
  const sliderLine = document.querySelector(".image-comparison .slider-line");
  const sliderIcon = document.querySelector(".image-comparison .slider-icon");

  slider.addEventListener("input", (e) => {
    let sliderValue = e.target.value + "%";

    beforeImage.style.width = sliderValue;
    sliderLine.style.left = sliderValue;
    sliderIcon.style.left = sliderValue;
  });
}

// section 9 shop the look=============================
let shopTheLook = document.querySelector(".s9-card-part");
DynamicCard(shopTheLook, "s9-card", 12, 15);

//section 10 read what innterests=====================
const details = document.querySelectorAll(".s10-details");
const images = document.querySelectorAll(".s10-img-part img");
details.forEach((detail) => {
  detail.addEventListener("mouseenter", () => {
    const imgId = detail.getAttribute("data-img");
    images.forEach((img) => {
      img.style.display = "none"; // Hide all images
    });
    document.getElementById(imgId).style.display = "block"; // Show the corresponding image
  });
});

// add to cart part start ===============================

let bagCount = JSON.parse(localStorage.getItem("bagcount")) || [];
let bag = document.querySelector(".bag-count");
let cartPage = document.querySelector(".cart-page");
let cartPart = document.querySelector(".cart-part");
let cartPartBorder = document.querySelector(".cart-part-border");
let blankPart = document.querySelector(".blank-part");

function getCartItems() {
  return bagCount.map((itemId) => {
    for (let index = 0; index < items.length; index++) {
      if (itemId == items[index].id) return items[index];
    }
  });
}

let cartItem = getCartItems();

if (bagCount.length > 0) {
  bag.style.display = "block";
  bag.innerHTML = bagCount.length;
}
function addToCart(itemId) {
  if(!bagCount.includes(itemId))
  bagCount.push(itemId);
  bag.innerHTML = bagCount.length;
  localStorage.setItem("bagcount", JSON.stringify(bagCount));
  cartItem = getCartItems();
  updateTotalPrice(cartItem);
}

onload();
function onload() {
  // function to open cart and close on click
  cartOpenAndClose();
}
function cartOpenAndClose() {
  let opencart = document.querySelectorAll(".s2-buyitnow,.shoppingbag");
  opencart.forEach((btn) => {
    btn.addEventListener("click", openCart);
  });

  // for open cart
  function openCart() {
    let numberOfItem = document.querySelector(".number-of-item");
    numberOfItem.innerHTML = `Total Item In Your Cart : ${bagCount.length}`;
    cartPage.style.display = "flex";
    setTimeout(() => {
      cartPartBorder.classList.add("visible");
      cartPart.classList.add("visible");
      blankPart.classList.add("visible");
      cartPage.style.position = "fixed";
      document.body.style.overflow = "hidden";
    }, 10);
    // function to add product cart daynamically in cart
    showTotalItem();
    // function to update price in cart 
    updateTotalPrice();
  }

  let closecart = document.querySelectorAll(".blank-part,.cart-close");
  closecart.forEach((btn) => {
    btn.addEventListener("click", closeCart);
  });

  // to close open cart
  function closeCart() {
    cartPartBorder.classList.remove("visible");
    cartPart.classList.remove("visible");
    blankPart.classList.remove("visible");
    document.body.style.overflow = "auto";
    setTimeout(() => {
      cartPage.style.position = "unset";
      cartPage.style.display = "none";
    }, 200);
  }
}

function showTotalItem() {
  let cartItemPart = document.querySelector(".carts-items-part");
  cartItemPart.innerHTML = "";
  console.log(cartItem);
  cartItem.forEach((item) => {
    cartItemPart.innerHTML += `
    <div class="row cart-item m-3 ${item.id} ">
      <div class="col-4"><img class="cart-item-img" src="${item.image}" alt="cart img">
      </div>
      <div class="col-8 cart-item-details">
          <p class="name m-0 ">${item.name}</p>
          <p class="extrainfo  ">${item.extrainfo}</p>
          <div class="mt-3 d-flex justify-content-between">
              <div class="price">Rs. ${item.price}</div>
              <div class="me-5 border">
                  <button class="add-remove px-2 border-0 increment" >+</button>
                  <span class="add-remove quantity ">1</span>
                  <button class="add-remove px-2 border-0 decrement">-</button>
              </div>
          </div>
      </div>
      <hr class="my-4">
    </div>
    `;
  });
  // for total price and number of product quantity
  priceAndQuantity();
}

function priceAndQuantity() {
  let increment = document.querySelectorAll(".increment");
  let decrement = document.querySelectorAll(".decrement");
  increment.forEach((btn) => {
    btn.addEventListener("click", () => {
      let quantity = btn.nextElementSibling;
      let currentQuantity = parseInt(quantity.innerText);
      quantity.innerText = currentQuantity + 1;
      console.log(btn.id);
    });
  });
  decrement.forEach((btn) => {
    btn.addEventListener("click", () => {
      let quantity = btn.previousElementSibling;
      let currentQuantity = parseInt(quantity.innerText);
     if(currentQuantity >= 1){ 
        quantity.innerText = currentQuantity - 1;
      }
    });
  });
}

function updateTotalPrice() {
  let totalPriceEle = document.querySelector(".total-price");
  totalPriceEle.innerText = "";
  let totalprice = 0;

  cartItem.forEach((item) => {
    totalprice += parseInt(item.price);
  });
  totalPriceEle.innerText = totalprice;
}

// localStorage.clear();
