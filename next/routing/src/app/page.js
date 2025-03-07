"use client";
import Link from "next/link";
import { useRouter } from "next/navigation";
import "./globals.css";
import "bootstrap/dist/css/bootstrap.min.css";

export default function Home() {
  let route = useRouter();

  const handelOnClick = (item) => {
    route.push(item);
  };

  return (
    <main className="mt-5 container text-center">
      <h1>Hello world, this is the home page</h1>
      <p>this is navlink example</p>
      <Link href="/login">Go to login</Link>
      <br />
      <hr />
      <p>this is navigantin example </p>
     
      <button className="btn btn-dark" onClick={() => handelOnClick("/about")}>
        go to about page
      </button> <br /> <br />
      <button
        className="btn btn-dark"
        onClick={() => handelOnClick("/services")}>
        go to services page
      </button>
    </main>
  );
}
