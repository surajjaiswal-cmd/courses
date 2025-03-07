import Link from "next/link";
export default function TeacherLogin() {
  let teachers = ["nayan", "kamal", "pawan", "raja", "kanak"];
  return (
    <div className="mt-10 container">
      <h1>this is Teacher login page</h1>
      <ol>
        {teachers.map((cur) => {
          return (
            <li key={cur} className="list-decimal list-inside">
              <Link href={`/login/teacherlogin/${cur}`} className="btn">
                {cur}
              </Link>
            </li>
          );
        })}
      </ol>

      <Link href="/login" className="btn btn-primary">
        go back
      </Link>
    </div>
  );
}
