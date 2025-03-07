import { NextResponse } from "next/server";

export default function middleware(request) {
  // Check if the pathname is not "/login"
  // if (request.nextUrl.pathname !== "/login") {
  return NextResponse.redirect(new URL("/login", request.url));
  // }
}

export const config = {
  matcher: "/login/studentlogin/:path*",
};

// it a self excuting code which excute before routing requests excution

// if we direct return without using if and config function then it will throww a error  'localhost redirected you too many times' because page creatr every time ne url and redirect to login page
