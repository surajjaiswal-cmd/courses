"use client";
import { useRouter } from "next/navigation";

const AboutCollage = () => {
  let route = useRouter();
  return (
    <div>
      <h1>this is About Collage page</h1>
      <button className="btn btn-primary" onClick={() => route.push("/about")}>
        goto home
      </button>
    </div>
  );
};

export default AboutCollage;
