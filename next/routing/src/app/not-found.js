"use client";
import { useRouter } from "next/navigation";

export default function NotFound() {
  const router = useRouter();
  return (
    <div className="conatiner text-center mt-24">
      <h1>This page does not exist | 404</h1>
      <button onClick={() => router.back()} className="mt-3 btn btn-success">
        Go Back
      </button>
    </div>
  );
}
// this is default not found page we createde