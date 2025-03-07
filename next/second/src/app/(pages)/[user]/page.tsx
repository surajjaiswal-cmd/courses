import Link from "next/link";

interface UserPageProps {
  params: { user: string };
}

const UserPage = async ({ params }: UserPageProps) => {
  const { user } =await params; // Directly access user from params (No need for async/await)

  return (
    <div>
      <h1>{` ${user} page`}</h1>
      <Link href={`${user}/post`} className="btn  btn-dark mt-2">
        Post
      </Link>
    </div>
  );
};

export default UserPage;
