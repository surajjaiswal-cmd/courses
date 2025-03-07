"use client";
import { useRouter } from "next/navigation";

const AboutStudents = () => {
  let route = useRouter();
  return (
    <div className="text-center mt-24">
      <h1>this is About Students page</h1>
      <button className="btn btn-primary" onClick={() => route.push("/about")}>
        goto home
      </button>
    </div>
  );
};

export default AboutStudents;
