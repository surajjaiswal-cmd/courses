"use client";
import Link from "next/link";
import { usePathname } from "next/navigation";

export default function LoginLayout({ children }) {
  let path = usePathname();

  return (
    <div>
      {/* this is conditional layout if you want to hide navbar in a component */}
      {path !== "/login/studentlogin" && ( 
        <ul className="d-flex justify-content-around py-2 bg-secondary ">
          <li>
            <h4>NevBar</h4>
          </li>
          <li>
            <Link href="/login" className="btn">
              login
            </Link>
          </li>
          <li>
            <Link href="/login/teacherlogin" className="btn">
              Teacher Login
            </Link>
          </li>
          <li>
            <Link href="/login/studentlogin" className="btn">
              student Login
            </Link>
          </li>
        </ul>
      )}

      {children}
    </div>
  );
}
