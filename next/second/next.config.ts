import type { NextConfig } from "next";

const nextConfig: NextConfig = {
  reactStrictMode: true,
  images: {
    domains: ["dummyjson.com", "cdn.dummyjson.com"], 
  },
};

export default nextConfig;
