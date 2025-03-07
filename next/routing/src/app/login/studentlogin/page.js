import Link from "next/link";
export default function StudentLogin() {
  return (
    <div className="container mt-10 text-red-500 text-center">
      <h1>this is Students login page</h1>
      <p>
        The navbar is hidden in this component because it is conditionally
        rendered.
      </p>
      <Link href="/login">go back</Link>
    </div>
  );
}

// this in nested routing using link
