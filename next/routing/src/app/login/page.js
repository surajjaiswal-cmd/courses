import Link from "next/link";

const Login = () => {
  return (
    <div className="mt-10 container text-center">
      <h1>this is login page</h1>
      <Link href="/login/teacherlogin">go to Teacher Login</Link>
      <br />
      <Link href="/login/studentlogin">go to student login</Link>
      <br />
      <h6>we have more page in student login but we have set middleware to go on login page.</h6>

      <hr />
      <Link href="/">go back</Link>
    </div>
  );
};

export default Login;
