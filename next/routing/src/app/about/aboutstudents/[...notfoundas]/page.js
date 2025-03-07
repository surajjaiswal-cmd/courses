"use client";
import { useRouter } from "next/navigation";

export default function NotFoundAS() {
  const router = useRouter();
  return (
    <div className="conatiner text-center mt-24">
      <h1>After About Student page does not exist | 404</h1>
      <button onClick={() => router.back()} className="mt-3 btn btn-success">
        Go Back
      </button>
    </div>
  );
}
// this is specific not found  page for a route we createde