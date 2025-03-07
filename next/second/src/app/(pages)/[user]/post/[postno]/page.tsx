import React from "react";

interface pro {
  params: { postno: number };
}

const postNo = async ({ params }: pro) => {
  const { postno } = await params;

  return (
    <>
      <h1>{`post number : ${postno}`}</h1>
    </>
  );
};

export default postNo;
