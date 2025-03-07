"use client";
import React, { useState } from "react";
import { HoveredLink, Menu, MenuItem } from "./ui/navbar-menu";
import { cn } from "@/lib/utils";
import Link from "next/link";

export default function Navbar({ className }: { className?: string }) {
  const [active, setActive] = useState<string | null>(null);
  return (
    <div className={cn("container fixed top-10 inset-x-0 w-75 ", className)}>
      <Menu setActive={setActive}>
        <Link href={"/"} className="no-underline">
          <MenuItem
            setActive={setActive}
            active={active}
            item="Home"></MenuItem>
        </Link>
        <MenuItem setActive={setActive} active={active} item="Our Courses">
          <div className="flex flex-col space-y-4 text-sm">
            <HoveredLink href="/web-dev">All Courses</HoveredLink>
            <HoveredLink href="/interface-design">
              Basic Music Theory
            </HoveredLink>
            <HoveredLink href="/seo">Advanced Composition</HoveredLink>
            <HoveredLink href="/branding">Song Writing</HoveredLink>
            <HoveredLink href="/branding">Music Production</HoveredLink>
          </div>
        </MenuItem>
        <Link href={"/contact"} className="no-underline">
          <MenuItem
            setActive={setActive}
            active={active}
            item="Contact Us"></MenuItem>
        </Link>
      </Menu>
    </div>
  );
}
