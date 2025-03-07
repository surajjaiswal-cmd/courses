import type { NextConfig } from "next";

const nextConfig: NextConfig = {
  reactStrictMode: true,
  images: {
    domains: ["dummyjson.com", "cdn.dummyjson.com", "fakestoreapi.com"], // Add your image source domains here
  },
};

export default nextConfig;
