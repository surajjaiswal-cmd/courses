import Link from "next/link";

export default function Nevbar() {
  return (
    <div className="container-fluid bg-sky-500 ">
      <div className="flex items-center justify-around ">
        <h4>MainNavbar</h4>
        <ul className="flex justify-between w-50 m-0">
          <li>
            <Link href={"/"} className=" btn">
              home
            </Link>
          </li>
          <li>
            <Link href={"/product1"} className=" btn">
              Product 1
            </Link>
          </li>
          <li>
            <Link href={"/product2"} className=" btn">
              Product 2
            </Link>
          </li>
          <li>contact</li>
          <li>about</li>
        </ul>
      </div>
    </div>
  );
}
