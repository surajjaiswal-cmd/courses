import Details from "@/components/details";
import Image from "next/image";

interface Product {
  id: number;
  title: string;
  price: number;
  description: string;
  image: string;
}

export default async function Clothes() {
  async function ProductList(): Promise<Product[]> {
    const res = await fetch("https://fakestoreapi.com/products");
      const data = await res.json();
    return data;
  }

  const products : Product[] = await ProductList();

  return (
    <div className="container text-white">
      <h1> All Products 2</h1>
      <p>
        <u>This is an example of calling an API in a server component</u>
      </p>
      <p>
        We cannot use events in a server component. That&apos;s why we need to create
        a client component in which we handle buttons and events, and then
        import it into the server component
      </p>
      <ul className="list-none row justify-content-around">
        {products.map((curr) => {
          return (
            <li className="col-3 bg-secondary text-white m-1" key={curr.id}>
              <Image
                src={curr.image}
                width={500}
                height={500}
                alt={curr.title}
                className="w-75 mx-auto"
                priority
              />
              <h6> {curr.title}</h6>
              <p> Price : {curr.price}</p>
              <Details details={curr.description} />
            </li>
          );
        })}
      </ul>
    </div>
  );
}
