"use client";
import { useEffect, useState } from "react";
import Image from "next/image";
import Product1 from "./product1.module.css";

interface Product {
  id: number;
  title: string;
  price: number;
  category: string;
  images: string[];
}

export default function Products() {
  const [products, setProducts] = useState<Product[]>([]);
  const api: string = "https://dummyjson.com/products";

  useEffect(() => {
    const fetchData = async () => {
      try {
        const res = await fetch(api);
        const data = await res.json();
        setProducts(data.products);
      } catch (error) {
        console.error("Error fetching data:", error);
      }
    };

    fetchData();
  }, []);

  return (
    <div className="container text-white">
      <h1 className="pt-3 text-info">All Products</h1>
      <p>
        <u>This example of calling an API in a client component</u>
      </p>
      <ul className={`${Product1.products} p-0`}>
        {products.map((curr) => {
          return (
            <li key={curr.id} className="bg-gray-500 border">
              <Image
                src={curr.images[0]}
                alt={curr.title}
                width={500}
                height={500}
                className="mx-auto w-75 h-auto"
              />
              <h6>{curr.title}</h6>
              <p>Price: {curr.price}</p>
              <p>Category: {curr.category}</p>
            </li>
          );
        })}
      </ul>
    </div>
  );
}
