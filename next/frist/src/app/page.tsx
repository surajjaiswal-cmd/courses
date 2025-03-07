import "@/styles/globals.css";

import "bootstrap/dist/css/bootstrap.min.css";
import Link from "next/link";
export default function Home() {
  return (
    <div className="bg-black text-white mt-3">
      <h1 style={{ fontFamily: "poppins" }}>hello world</h1>
      <Link href={`/product1`} className="btn btn-success">
        product 1
      </Link>
      <br />
      <Link href={"/product2"} className="btn btn-success mt-2">
        product 2
      </Link>
    </div>
  );
}
