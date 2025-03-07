import "./App.css";
import "bootstrap/dist/css/bootstrap.min.css";
import { QueryClient, QueryClientProvider } from "@tanstack/react-query";
import { MainPage } from "./components/MainPage";

function App() {
  return (
    <QueryClientProvider client={new QueryClient()}>
      <div className="container my-5">
        <MainPage />
      </div>
    </QueryClientProvider>
  );
}

export default App;
