export const ErrorFound = ({ msg }) => {
  return (
    <div className="container w-50 h-50 d-flex flex-column align-items-center justify-content-center">
      <img
        className="w-100 h-auto"
        src="https://cdn.svgator.com/images/2024/04/animated-3D-404-not-found-page-error.gif"
        alt="404 not found"
      />
      <div className="pt-3 fs-5 ">
        <b>{msg}</b>
      </div>
    </div>
  );
};
