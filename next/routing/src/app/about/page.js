"use client";
import { useRouter } from "next/navigation";

const About = () => {
  let route = useRouter();

  const handelOnClick = (item) => {
    route.push(item);
  };
  return (
    <div className="text-center mt-24">
      <h1>this is About page</h1>
      <button
        className="btn btn-dark"
        onClick={() => handelOnClick("/about/aboutstudents")}>
        go to About Students page
      </button>
      <br /> <br />
      <button
        className="btn btn-dark"
        onClick={() => handelOnClick("/about/aboutcollage")}>
        go to About Collage page
      </button>
      <br />
      <hr />
      <button className="btn btn-primary" onClick={() => route.push("/")}>
        goto home
      </button>
    </div>
  );
};

export default About;
//nesting routing buy navigation