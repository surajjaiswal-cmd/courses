"use client";

import { useParams } from "next/navigation";
import { useRouter } from "next/navigation";

export default function Teacher() {
  const params = useParams();
  const router = useRouter();

  return (
    <div className="container">
      <h1 className="mt-3">Teacher Details</h1>
      <h3>{`Hello, dear. I am ${params.teacher}. How are you today?`}</h3>
      {/* this function use to go back last page */}
      <button onClick={() => router.back()} className="btn btn-success mt-4">
        Go Back
      </button>
    </div>
  );
}
