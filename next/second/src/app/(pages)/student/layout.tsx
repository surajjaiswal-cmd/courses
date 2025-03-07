"use client"
import { usePathname } from "next/navigation";

export default function StudentLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  const path = usePathname();

  return (
    <>
      {path === "/student" && (
        <>
          <div className="bg-gray-500 py-1">
            <h1>Student Page Header</h1>
          </div>
          {children}
          <div className="bg-gray-500 py-1 fixed bottom-0 w-full">
            <h1>Student Page Footer</h1>
          </div>
        </>
      )}
    </>
  );
}
