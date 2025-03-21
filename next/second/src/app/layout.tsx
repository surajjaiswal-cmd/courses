import type { Metadata } from "next";
import "./globals.css";
import LayoutWrapper from "@/components/layoutwrapper";

export const metadata: Metadata = {
  title: "Second",
  description: "Generated by create next app",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="en">
      <body className={`antialiased container-fluid p-0  text-center `}>
        <LayoutWrapper>{children}</LayoutWrapper>
      </body>
    </html>
  );
}
