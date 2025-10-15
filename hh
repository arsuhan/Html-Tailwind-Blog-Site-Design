<!DOCTYPE html>
<nav class="flex flex-wrap justify-between items-center py-4 px-5 sm:px-10 lg:px-16 max-w-7xl mx-auto">
    <div class="flex items-center space-x-2">
      <span class="text-yellow-400 text-2xl font-bold">🛒</span>
      <span class="text-white font-bold text-xl">grocify</span>
    </div>

    <!-- menu -->
    <ul class="hidden md:flex space-x-6 lg:space-x-10 text-sm sm:text-base">
      <li><a href="#" class="hover:text-yellow-400">Home</a></li>
      <li><a href="#" class="hover:text-yellow-400">About</a></li>
      <li><a href="#" class="hover:text-yellow-400">Features</a></li>
      <li><a href="#" class="hover:text-yellow-400">Contact</a></li>
    </ul>

    <div class="hidden md:block">
      <button class="text-white hover:text-yellow-400">
        🛍️
      </button>
    </div>

    <!-- mobile menu button -->
    <div class="md:hidden text-yellow-400 text-2xl cursor-pointer">
      <i class="fa-solid fa-bars"></i>
    </div>
  </nav>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Grocify Hero Section</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link
    rel="stylesheet"
    href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.6.0/css/all.min.css"
    integrity="sha512-K7n0RzDNYhDqZ3vjKcA7L3L8fVqVfQdCeZ3+0Tz9xKZ1rLQkQXbJdEJY0D1y9ItDqf5Ege0M8fFi+w3V5bK2hQ=="
    crossorigin="anonymous"
    referrerpolicy="no-referrer"
  />
</head>
<body class="bg-gray-900 text-white bg-center bg-cover bg-[url('./images/image.png')]">
    <!-- Navbar -->
    <nav class="flex justify-between items-center py-6 px-16 max-w-7xl mx-auto">
        <div class="flex items-center space-x-2">
            <span class="text-yellow-400 text-2xl font-bold">🛒</span>
            <span class="text-white font-bold text-xl">grocify</span>
        </div>
        <ul class="flex space-x-10">
            <li><a href="#" class="hover:text-yellow-400">Home</a></li>
            <li><a href="#" class="hover:text-yellow-400">About</a></li>
            <li><a href="#" class="hover:text-yellow-400">Features</a></li>
            <li><a href="#" class="hover:text-yellow-400">Contact</a></li>
        </ul>
        <div>
            <button class="text-white hover:text-yellow-400">
                🛍️
            </button>
        </div>
    </nav>

    <!-- Hero Section -->
    <section class="max-w-7xl mx-auto px-6 flex flex-col-reverse lg:flex-row items-center gap-10 py-0">
        <!-- Left Text -->
        <div class="flex-1">
            <h1 class="lg:text-4xl md:text-5xl font-bold mb-4">Groceries <br> delivery in <span class="text-yellow-400 font-thin">15 mins</span></h1>
            <p class="text-gray-300 mb-6">
                Grocify offer a wide range of products, including fresh products, meats, dairy, baked goods and non-perishable items.
            </p>
            <div class="flex gap-4">
                <button class="bg-yellow-400 text-gray-900 px-6 py-2 rounded-lg font-semibold hover:bg-yellow-500 transition">
                    Order Now
                </button>
                <button class="border border-gray-400 px-6 py-3 rounded-lg font-semibold hover:bg-gray-800 transition">
                    Download App
                </button>
            </div>
        </div>

        <!-- Right Image -->
        <div class="flex-1 flex justify-center lg:justify-end">
            <img src="/Images/img/logo.png" alt="Groceries" class="w-full max-w-xl rounded-lg">
        </div>
    </section>

    <!-- hh -->

   <div class="bg-gray-950">
    <div class="py-12">
        <div class="text-center m-auto mb-20 md:w-1/2">
            <h1 class="mb-4 text-orange-500 font-bold">Our Feture</h1>
            <h1 class="mb-4 text-2xl text-white font-bold">Easy To Manage Your All Payments By Our App</h1>
        </div>

        <div class="grid lg:grid-cols-3 md:grid-cols-2 px-24 gap-4 lg:gap-5 sm:px-6 lg:px-28">
            <!-- card 1 -->

             <div class="border border-solid border-cyan-300 hover:bg-slate-900 text-center py-12 px-5 rounded-lg cursor-pointer shadow-lg ease-in transition-transform duration-300 hover:-translate-y-1">
                <div class="bg-orange-500 inline-block rounded-2xl py-3 px-3">
                    <!-- <i class="fa-solid fa-calender-days text-4xl"></i> -->
                     <svg width="34px" height="34px" viewBox="-5.4 0 98.4 98.4" xmlns="http://www.w3.org/2000/svg" fill="#ffffff" stroke="#ffffff"><g id="SVGRepo_bgCarrier" stroke-width="0"></g><g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g><g id="SVGRepo_iconCarrier"> <g id="Group_4" data-name="Group 4" transform="translate(-822.7 -241.5)"> <path id="Path_52" data-name="Path 52" d="M899.4,254.3H833.6a8.92,8.92,0,0,0-8.9,8.9V329a8.92,8.92,0,0,0,8.9,8.9h65.8a8.92,8.92,0,0,0,8.9-8.9V263.2A8.92,8.92,0,0,0,899.4,254.3Z" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></path> <line id="Line_25" data-name="Line 25" x2="21.2" transform="translate(842.6 283.7)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_26" data-name="Line 26" x2="45.9" transform="translate(842.6 302)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_27" data-name="Line 27" y2="19.6" transform="translate(853.6 243.5)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_28" data-name="Line 28" y2="19.6" transform="translate(879.4 243.5)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> </g> </g></svg>
                    
                </div>
                <h3 class="text-xl font-bold py-4">Expense Trackering</h3>
                <p class="leading-relaxed">We use an application designed a testing gonse to keep away</p>
            </div>

             <div class="border border-solid border-cyan-300 hover:bg-slate-900 text-center py-12 px-5 rounded-lg cursor-pointer shadow-lg ease-in transition-transform duration-300 hover:-translate-y-1">
                <div class="bg-orange-500 inline-block rounded-2xl py-3 px-3">
                    <!-- <i class="fa-solid fa-calender-days text-4xl"></i> -->
                     <svg width="34px" height="34px" viewBox="-5.4 0 98.4 98.4" xmlns="http://www.w3.org/2000/svg" fill="#ffffff" stroke="#ffffff"><g id="SVGRepo_bgCarrier" stroke-width="0"></g><g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g><g id="SVGRepo_iconCarrier"> <g id="Group_4" data-name="Group 4" transform="translate(-822.7 -241.5)"> <path id="Path_52" data-name="Path 52" d="M899.4,254.3H833.6a8.92,8.92,0,0,0-8.9,8.9V329a8.92,8.92,0,0,0,8.9,8.9h65.8a8.92,8.92,0,0,0,8.9-8.9V263.2A8.92,8.92,0,0,0,899.4,254.3Z" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></path> <line id="Line_25" data-name="Line 25" x2="21.2" transform="translate(842.6 283.7)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_26" data-name="Line 26" x2="45.9" transform="translate(842.6 302)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_27" data-name="Line 27" y2="19.6" transform="translate(853.6 243.5)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_28" data-name="Line 28" y2="19.6" transform="translate(879.4 243.5)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> </g> </g></svg>
                    
                </div>
                <h3 class="text-xl font-bold py-4">Expense Trackering</h3>
                <p class="leading-relaxed">We use an application designed a testing gonse to keep away</p>
            </div>

            <div class="border border-solid border-cyan-300 hover:bg-slate-900 text-center py-12 px-5 rounded-lg cursor-pointer shadow-lg ease-in transition-transform duration-300 hover:-translate-y-1">
                <div class="bg-orange-500 inline-block rounded-2xl py-3 px-3">
                    <!-- <i class="fa-solid fa-calender-days text-4xl"></i> -->
                     <svg width="34px" height="34px" viewBox="-5.4 0 98.4 98.4" xmlns="http://www.w3.org/2000/svg" fill="#ffffff" stroke="#ffffff"><g id="SVGRepo_bgCarrier" stroke-width="0"></g><g id="SVGRepo_tracerCarrier" stroke-linecap="round" stroke-linejoin="round"></g><g id="SVGRepo_iconCarrier"> <g id="Group_4" data-name="Group 4" transform="translate(-822.7 -241.5)"> <path id="Path_52" data-name="Path 52" d="M899.4,254.3H833.6a8.92,8.92,0,0,0-8.9,8.9V329a8.92,8.92,0,0,0,8.9,8.9h65.8a8.92,8.92,0,0,0,8.9-8.9V263.2A8.92,8.92,0,0,0,899.4,254.3Z" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></path> <line id="Line_25" data-name="Line 25" x2="21.2" transform="translate(842.6 283.7)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_26" data-name="Line 26" x2="45.9" transform="translate(842.6 302)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_27" data-name="Line 27" y2="19.6" transform="translate(853.6 243.5)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> <line id="Line_28" data-name="Line 28" y2="19.6" transform="translate(879.4 243.5)" fill="none" stroke="#ffffff" stroke-linecap="round" stroke-miterlimit="10" stroke-width="4"></line> </g> </g></svg>
                    
                </div>
                <h3 class="text-xl font-bold py-4">Expense Trackering</h3>
                <p class="leading-relaxed">We use an application designed a testing gonse to keep away</p>
            </div>
        </div>
    </div>
   </div>

</body>
</html>

