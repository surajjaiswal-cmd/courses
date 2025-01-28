import { useState, useEffect } from "react";

export function FetchPikachu() {
  const [pikachu, setPikachu] = useState(null);

  const api = "https://pokeapi.co/api/v2/pokemon/pikachu";

  useEffect(() => {
    fetch(api)
      .then((response) => response.json())
      .then((data) => setPikachu(data))
      .catch((error) => console.log(error));
  }, []);

  console.log(pikachu);

  return (
    <div
      className="text-center"
      style={{
        padding: "20px",
        border: "1px solid #ccc",
        marginTop: "1rem",
      }}>
      <h2>
        <u>Fetch Pikachu From API</u>
      </h2>
      {pikachu ? (
        <>
          <img
            src={pikachu.sprites.other.dream_world.front_default}
            alt="img"
          />
          <p>{pikachu.name}</p>{" "}
        </>
      ) : (
        <p>Loading...</p>
      )}
    </div>
  );
}
