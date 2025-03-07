
// not working in clint component 
export const metadata = {
  title: "Second - All Products",
  description: "Browse our collection of amazing products.",
};

import Products from "./products"; // Import your client component

export default function ProductsPage() {
  return <Products />;
}