"use client";
export default function Details({ details }) {
  return (
    <>
      <button
        className="btn btn-dark py-0 mb-2 "
        onClick={() => alert(`${details}`)}>
        Detail
      </button>
    </>
  );
}
