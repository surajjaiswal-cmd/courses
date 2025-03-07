"use client";

import { usePathname } from "next/navigation";
import Header from "@/components/header";
import Footer from "@/components/footer";

const LayoutWrapper = ({ children }: { children: React.ReactNode }) => {
  const path = usePathname();

  return (
    <>
      {path !== "/student" && <Header />}
      {children}
      {path !== "/student" && <Footer />}
    </>
  );
};

export default LayoutWrapper;
