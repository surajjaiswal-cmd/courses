let items = [
  {
    id: "001",
    image: "../img/s2/s2-img1.webp",
    name: "ACE 2",
    price: "1299.00",
    actualprice: "3999.00",
    rating: "⭐⭐⭐⭐⭐(54)",
    extrainfo: "BT Calling | 1.83' TFT Display",
  },
  {
    id: "002",
    image: "../img/s2/s2-img2.webp",
    name: "AIRFLOW PLUS",
    price: "899.00",
    actualprice: "4999.00",
    rating: "⭐⭐⭐⭐⭐(70)",
    extrainfo: "13 mm Drives | Bluthooth v5.1",
  },
  {
    id: "003",
    image: "../img/s2/s2-img3.webp",
    name: "BASH PRO",
    price: "3599.00",
    actualprice: "11999.00",
    rating: "⭐⭐⭐⭐⭐(4)",
    extrainfo: "ANC + ENC | Quad MICS",
  },
  {
    id: "004",
    image: "../img/s2/s2-img4.webp",
    name: "DROP",
    price: "999.00",
    actualprice: "3499.00",
    rating: "⭐⭐⭐⭐⭐(48)",
    extrainfo: "5W Speaker | 100H Standby",
  },
  {
    id: "005",
    image: "../img/s5/s5-img1.webp",
    name: "SCREEN TWS",
    price: "2400.00",
    actualprice: "8999.00",
    rating: "⭐⭐⭐⭐⭐(213)",
    extrainfo: "ANC + ENC | Touch Screen",
  },
  {
    id: "006",
    image: "../img/s5/s5-img2.png",
    name: "BASH PRO",
    price: "3599.00",
    actualprice: "11999.00",
    rating: "⭐⭐⭐⭐⭐(2)",
    extrainfo: "ANC + ENC | Quad Mics",
  },
  {
    id: "007",
    image: "../img/s5/s5-img3.webp",
    name: "ACTIVE 2.0 PLUS",
    price: "2299.00",
    actualprice: "5999.00",
    rating: "⭐⭐⭐⭐⭐(84)",
    extrainfo: `2.1" Display | Gesture Control | BT Calling`,
  },
  {
    id: "008",
    image: "../img/s5/s5-img4.webp",
    name: "STELLER",
    price: "1499.00",
    actualprice: "5999.00",
    rating: "⭐⭐⭐⭐⭐(6)",
    extrainfo: "ENC + Quad Mics",
  },
  {
    id: "009",
    image: "../img/s5/s5-img5.webp",
    name: "CYCLONE",
    price: "1599.00",
    actualprice: "4999.00",
    rating: "⭐⭐⭐⭐⭐(17)",
    extrainfo: `1.39" Screen | BT Calling`,
  },
  {
    id: "010",
    image: "../img/s5/s5-img6.webp",
    name: "AERO MAX",
    price: "1499.00",
    actualprice: "5999.00",
    rating: "⭐⭐⭐⭐⭐(36)",
    extrainfo: "ANC + ENC | Upto 30 hrs playtime",
  },
  {
    id: "011",
    image: "../img/s5/s5-img7.webp",
    name: "LAXOR",
    price: "2799.00",
    actualprice: "8999.00",
    rating: "⭐⭐⭐⭐⭐(19)",
    extrainfo: `1.45" Amoled | BT Calling`,
  },
  {
    id: "012",
    image: "../img/s5/s5-img8.webp",
    name: "BLAZE",
    price: "1999.00",
    actualprice: "8999.00",
    rating: "⭐⭐⭐⭐⭐(10)",
    extrainfo: "50mm Drivers | RGB Lights",
  },
  {
    id: "013",
    image: "../img/s9/s9-img2.webp",
    name: "ACE 4",
    price: "1599.00",
    actualprice: "4999.00",
    rating: "⭐⭐⭐⭐⭐(27)",
    extrainfo: "BT Calling | IP67",
  },
  {
    id: "014",
    image: "../img/s9/s9-img3.webp",
    name: "KO PRO",
    price: "1299.00",
    actualprice: "5999.00",
    rating: "⭐⭐⭐⭐⭐(29)",
    extrainfo: "Bluthooth v5.3 | Touch Control",
  },
  {
    id: "015",
    image: "../img/s9/s9-img4.webp",
    name: "FLAX 3.0",
    price: "2499.00",
    actualprice: "4999.00",
    rating: "⭐⭐⭐⭐⭐(10)",
    extrainfo: "wireless Charging | 3 in 1 | Mag Safe",
  },
  {
    id: 601,
    image: "../img/s6/s6-img1.1.webp",
    name: "Cyclone",
    extrainfo: "1.39' Display",
    actualprice: "4,999.00",
    price: "1,599.00",
    rating: "⭐⭐⭐⭐⭐(22)",
  },
  {
    id: 602,
    image: "../img/s6/s6-img1.2.webp",
    name: "Aero Max",
    extrainfo: "ANC + ENC | 30hrs Playtime",
    actualprice: "5,999.00",
    price: "1,499.00",
    rating: "⭐⭐⭐⭐⭐(52)",
  },
  {
    id: 603,
    image: "../img/s6/s6-img1.3.webp",
    name: "Stroke",
    extrainfo: "1.96' Display | AOD",
    actualprice: "6,999.00",
    price: "1,599.00",
    rating: "⭐⭐⭐⭐⭐(92)",
  },
  {
    id: 604,
    image: "../img/s6/s6-img2.1.webp",
    name: "Active 2",
    extrainfo: "AOD | 600 Nits Brightness",
    actualprice: "5,999.00",
    price: "2,099.00",
    rating: "⭐⭐⭐⭐⭐(12)",
  },
  {
    id: 605,
    image: "../img/s6/s6-img2.2.webp",
    name: "Bash Lite",
    extrainfo: "Bluthooth V5.3 | 3.5mm Audio Jack",
    actualprice: "3,999.00",
    price: "1,299.00",
    rating: "⭐⭐⭐⭐⭐(42)",
  },
  {
    id: 606,
    image: "../img/s6/s6-img2.3.webp",
    name: "Hammer Airflow",
    extrainfo: "BT v5 | IPX4",
    actualprice: "4,995.00",
    price: "899.00",
    rating: "⭐⭐⭐⭐⭐(12)",
  },
  {
    id: 607,
    image: "../img/s6/s6-img3.1.webp",
    name: "KO PRO",
    extrainfo: "ENC | BT5.3",
    actualprice: "5,999.00",
    price: "1,299.00",
    rating: "⭐⭐⭐⭐⭐(42)",
  },
  {
    id: 608,
    image: "../img/s6/s6-img3.2.webp",
    name: "ACE Ultra",
    extrainfo: "AOD | 1.96'Screen",
    actualprice: "4,999.00",
    price: "2,14,999.0099.00",
    rating: "⭐⭐⭐⭐⭐(36)",
  },
  {
    id: 609,
    image: "../img/s6/s6-img3.3.webp",
    name: "Bash Max",
    extrainfo: "1.65' Display",
    actualprice: "8,245.00",
    price: "2,499.00",
    rating: "⭐⭐⭐⭐⭐(34)",
  },
  {
    id: 610,
    image: "../img/s6/s6-img4.1.webp",
    name: "Ultraflow Plus",
    extrainfo: "Oscillating | 8800 strokes",
    actualprice: "3,999.00",
    price: "2,090.00",
    rating: "⭐⭐⭐⭐⭐(27)",
  },
  {
    id: 611,
    image: "../img/s6/s6-img4.2.webp",
    name: "Flow 2.0",
    extrainfo: "AAA Battery | 24000 Stroke/Min",
    actualprice: "1,999.00",
    price: "599.00",
    rating: "⭐⭐⭐⭐⭐(24)",
  },
  {
    id: 612,
    image: "../img/s6/s6-img5.3.webp",
    name: "Ultraflow 2.0",
    extrainfo: "Magnetic Charging | IPX7",
    actualprice: "3,999.00",
    price: "1,744.00",
    rating: "⭐⭐⭐⭐⭐(36)",
  },
  {
    id: 613,
    image: "../img/s6/s6-img5.1.webp",
    name: "ACE 3",
    extrainfo: "1.85' IPS Display | Rotating crown",
    actualprice: "4,999.00",
    price: "1,599.00",
    rating: "⭐⭐⭐⭐⭐(32)",
  },
  {
    id: 614,
    image: "../img/s6/s6-img5.2.webp",
    name: "splendor",
    extrainfo: "Bluthooth Nackband",
    actualprice: "2,499.00",
    price: "699.00",
    rating: "⭐⭐⭐⭐⭐(12)",
  },
  {
    id: 615,
    image: "../img/s6/s6-img5.3.webp",
    name: "ACE 4",
    extrainfo: "1.85' IPS Display | Metal Body",
    actualprice: "4,999.00",
    price: "1,599.00",
    rating: "⭐⭐⭐⭐⭐(21)",
  },
  {
    id: 616,
    image: "../img/s6/s6-img6.1.webp",
    name: "G-Shots",
    extrainfo: "BT V5.3 | Gaming TWS",
    actualprice: "4,999.00",
    price: "999.00",
    rating: "⭐⭐⭐⭐⭐(42)",
  },
  {
    id: 617,
    image: "../img/s6/s6-img6.2.webp",
    name: "Bash 2.0",
    extrainfo: "BT V5.0 | Deep Bash",
    actualprice: "8,245.00",
    price: "2,499.00",
    rating: "⭐⭐⭐⭐⭐(72)",
  },
  {
    id: 618,
    image: "../img/s6/s6-img6.3.webp",
    name: "Drop",
    extrainfo: `100HR Stand By | 5W`,
    actualprice: "3,499.00",
    price: "999.00",
    rating: "⭐⭐⭐⭐⭐(27)",
  },
];

let s3SlidesData = [
  {
    id: 301,
    imgSrc: "../img/s3/s3-img1.webp",
    imgCutSrc: "../img/s3/s3-img1-cut.jpeg",
    caption: "Bluetooth Calling Smartwatch",
    isActive: "active",
  },
  {
    id: 302,
    imgSrc: "../img/s3/s3-img2.webp",
    imgCutSrc: "../img/s3/s3-img2-cut.webp",
    caption: "Hammer Bluetooth Headphones",
  },
  {
    id: 303,
    imgSrc: "../img/s3/s3-img3.webp",
    imgCutSrc: "../img/s3/s3-img3-cut.webp",
    caption: "True Wireless Earbuds",
  },
  {
    id: 304,
    imgSrc: "../img/s3/s3-img4.webp",
    imgCutSrc: "../img/s3/s3-img4-cut.webp",
    caption: "Hammer Electric Toothbrush",
  },
];

let s4SlideData = [
  {
    active: "active",
    img1: "../img/s4/s4-img1.1.webp",
    img1info: "",
    img2: "../img/s4/s4-img1.2.webp",
    img2info: "",
    img3: "../img/s4/s4-img1.3.webp",
    img3info: "",
    img4: "../img/s4/s4-img1.4.webp",
    img4info: "",
    img5: "../img/s4/s4-img1.5.webp",
  },
  {
    img1: "../img/s4/s4-img2.1.webp",
    textColor1: "text-dark",
    img1info: "Hammer Ultraflow <br> 31,000 strokes per minutes",
    img2: "../img/s4/s4-img2.2.webp",
    textColor2: "text-white",
    img2info: `ACE Ultra <br> Biggest 1.96 Display`,
    img3: "../img/s4/s4-img2.3.webp",
    textColor3: "text-white",
    img3info: "Airflow 2.0 <br> Bluthooth V5.0",
    img4: "../img/s4/s4-img2.4.webp",
    textColor4: "text-white",
    img4info: "Bash 2.0 <br>Wired & Wireless",
    img5: "../img/s4/s4-img2.5.webp",
    textColor5: "text-dark",
    img5info: "Ace 4.0 <br> 60 Sports Modes",
  },
  {
    img1: "../img/s4/s4-img3.1.webp",
    textColor1: "text-white",
    img1info: "KO Mini TWS <br> Earbuds withh Touch Controles",
    img2: "../img/s4/s4-img3.2.webp",
    textColor2: "text-white",
    img2info: "Twisk Neckband <br> HD Sound Quality",
    img3: "../img/s4/s4-img3.3.webp",
    textColor3: "text-dark",
    img3info: "Hammer Flow Lite <br> Deep Cleaning",
    img4: "../img/s4/s4-img3.4.webp",
    textColor4: "text-dark",
    img4info: "PD Adaptor <br> Fast Charging",
    img5: "../img/s4/s4-img3.5.webp",
    textColor5: "text-white",
    img5info: "Hammer Flow 2.0 <br> 120 Days Batter Life",
  },
  {
    active: "active",
    img1: "../img/s4/cut/cut-s4-img1.1.webp",
    img1info: "",
    img2: "../img/s4/cut/cut-s4-img1.2.webp",
    img2info: "",
    img3: "../img/s4/cut/cut-s4-img1.3.webp",
    img3info: "",
    img4: "../img/s4/cut/cut-s4-img1.4.webp",
    img4info: "",
    img5: "../img/s4/cut/cut-s4-img1.5.webp",
    img5info: "",
  },
  {
    img1: "../img/s4/cut/cut-s4-img2.1.webp",
    textColor1: "text-dark",
    img1info: "Hammer Ultraflow <br> 31,000 strokes per minutes",
    img2: "../img/s4/cut/cut-s4-img2.2.jpeg",
    textColor2: "text-white",
    img2info: "ACE Ultra <br> Biggest 1.96 Display",
    img3: "../img/s4/cut/cut-s4-img2.3.webp",
    textColor3: "text-white",
    img3info: "Airflow 2.0 <br> Bluthooth V5.0",
    img4: "../img/s4/cut/cut-s4-img2.4.webp",
    textColor4: "text-white",
    img4info: "Bash 2.0 <br>Wired & Wireless",
    img5: "../img/s4/cut/cut-s4-img2.5.webp",
    textColor5: "text-dark",
    img5info: "Ace 4.0 <br> 60 Sports Modes",
  },
  {
    img1: "../img/s4/cut/cut-s4-img3.1.webp",
    textColor1: "text-white",
    img1info: "KO Mini TWS <br> Earbuds withh Touch Controles",
    img2: "../img/s4/cut/cut-s4-img3.2.webp",
    textColor2: "text-white",
    img2info: "Twisk Neckband <br> HD Sound Quality",
    img3: "../img/s4/cut/cut-s4-img3.3.webp",
    textColor3: "text-dark",
    img3info: "Hammer Flow Lite <br> Deep Cleaning",
    img4: "../img/s4/cut/cut-s4-img3.4.webp",
    textColor4: "text-dark",
    img4info: "PD Adaptor <br> Fast Charging",
    img5: "../img/s4/cut/cut-s4-img3.5.webp",
    textColor5: "text-white",
    img5info: "PD Adaptor <br> Fast Charging",
  },
];

let s6items = [
  {
    s6cardback: [
      {
        id: 601,
        image: "../img/s6/s6-img1.1.webp",
        name: "Cyclone",
        extrainfo: "1.39' Display",
        actualprice: "4,999.00",
        price: "1,599.00",
      },
      {
        id: 602,
        image: "../img/s6/s6-img1.2.webp",
        name: "Aero Max",
        extrainfo: "ANC + ENC | 30hrs Playtime",
        actualprice: "5,999.00",
        price: "1,499.00",
      },
      {
        id: 603,
        image: "../img/s6/s6-img1.3.webp",
        name: "Stroke",
        extrainfo: "1.96' Display | AOD",
        actualprice: "6,999.00",
        price: "1,599.00",
      },
    ],
    id: 6001,
    image: "../img/s6/s6-img1.webp",
  },
  {
    s6cardback: [
      {
        id: 604,
        image: "../img/s6/s6-img2.1.webp",
        name: "Active 2",
        extrainfo: "AOD | 600 Nits Brightness",
        actualprice: "5,999.00",
        price: "2,099.00",
      },
      {
        id: 605,
        image: "../img/s6/s6-img2.2.webp",
        name: "Bash Lite",
        extrainfo: "Bluthooth V5.3 | 3.5mm Audio Jack",
        actualprice: "3,999.00",
        price: "1,299.00",
      },
      {
        id: 606,
        image: "../img/s6/s6-img2.3.webp",
        name: "Hammer Airflow",
        extrainfo: "BT v5 | IPX4",
        actualprice: "4,995.00",
        price: "899.00",
      },
    ],
    id: 6002,
    image: "../img/s6/s6-img2.webp",
  },
  {
    s6cardback: [
      {
        id: 607,
        image: "../img/s6/s6-img3.1.webp",
        name: "KO PRO",
        extrainfo: "ENC | BT5.3",
        actualprice: "5,999.00",
        price: "1,299.00",
      },
      {
        id: 608,
        image: "../img/s6/s6-img3.2.webp",
        name: "ACE Ultra",
        extrainfo: "AOD | 1.96'Screen",
        actualprice: "4,999.00",
        price: "2,14,999.0099.00",
      },
      {
        id: 609,
        image: "../img/s6/s6-img3.3.webp",
        name: "Bash Max",
        extrainfo: "1.65' Display",
        actualprice: "8,245.00",
        price: "2,499.00",
      },
    ],
    id: 6003,
    image: "../img/s6/s6-img3.webp",
  },
  {
    s6cardback: [
      {
        id: 610,
        image: "../img/s6/s6-img4.1.webp",
        name: "Ultraflow Plus",
        extrainfo: "Oscillating | 8800 strokes",
        actualprice: "3,999.00",
        price: "2,090.00",
      },
      {
        id: 611,
        image: "../img/s6/s6-img4.2.webp",
        name: "Flow 2.0",
        extrainfo: "AAA Battery | 24000 Stroke/Min",
        actualprice: "1,999.00",
        price: "599.00",
      },
      {
        id: 612,
        image: "../img/s6/s6-img5.3.webp",
        name: "Ultraflow 2.0",
        extrainfo: "Magnetic Charging | IPX7",
        actualprice: "3,999.00",
        price: "1,744.00",
      },
    ],
    id: 6004,
    image: "../img/s6/s6-img4.webp",
  },
  {
    s6cardback: [
      {
        id: 613,
        image: "../img/s6/s6-img5.1.webp",
        name: "ACE 3",
        extrainfo: "1.85' IPS Display | Rotating crown",
        actualprice: "4,999.00",
        price: "1,599.00",
      },
      {
        id: 614,
        image: "../img/s6/s6-img5.2.webp",
        name: "splendor",
        extrainfo: "Bluthooth Nackband",
        actualprice: "2,499.00",
        price: "699.00",
      },
      {
        id: 615,
        image: "../img/s6/s6-img5.3.webp",
        name: "ACE 4",
        extrainfo: "1.85' IPS Display | Metal Body",
        actualprice: "4,999.00",
        price: "1,599.00",
      },
    ],
    id: 6005,
    image: "../img/s6/s6-img5.webp",
  },
  {
    s6cardback: [
      {
        id: 616,
        image: "../img/s6/s6-img6.1.webp",
        name: "G-Shots",
        extrainfo: "BT V5.3 | Gaming TWS",
        actualprice: "4,999.00",
        price: "999.00",
      },
      {
        id: 617,
        image: "../img/s6/s6-img6.2.webp",
        name: "Bash 2.0",
        extrainfo: "BT V5.0 | Deep Bash",
        actualprice: "8,245.00",
        price: "2,499.00",
      },
      {
        id: 618,
        image: "../img/s6/s6-img6.3.webp",
        name: "Drop",
        extrainfo: `100HR Stand By | 5W`,
        actualprice: "3,499.00",
        price: "999.00",
      },
    ],
    id: 6006,
    image: "../img/s6/s6-img6.webp",
  },
];
