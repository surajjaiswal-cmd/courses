import type { Metadata } from "next";
import "@/styles/globals.css";
import "bootstrap/dist/css/bootstrap.min.css";
import Nevbar from "@/components/nevbar";
import { Poppins } from "next/font/google";
import { NextFont } from "next/dist/compiled/@next/font";

const poppins: NextFont = Poppins({
  weight: "300",
  subsets: ["latin"],
});

export const metadata: Metadata = {
  title: "Frist App",
};

interface RootLayoutProps {
  children: React.ReactNode;
}

export default function RootLayout({ children }: RootLayoutProps) {
  return (
    <html lang="en">
   
      <body className={`${poppins.className} bg-black text-center`}>
        <Nevbar />
        {children}
      </body>
    </html>
  );
}
