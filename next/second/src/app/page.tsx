import Link from "next/link";

export default function Home() {
  // throw new Error("error found");
  return (
    <div>
      <h1> hello world </h1>
      <Link href={`/student`} className="btn  btn-dark">
        Student
      </Link>
      <br />
      <Link href={`/product`} className="btn  btn-dark mt-2">
        Product
      </Link>
      <br />
      <Link href={`/user`} className="btn  btn-dark mt-2">
       User
      </Link>
    </div>
  );
}
