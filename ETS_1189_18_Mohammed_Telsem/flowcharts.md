# Flowcharts

## Task 1: Student course total

~~~mermaid
flowchart TD
    A([Start]) --> B["Declare variables and constants<br/>weights 0.20, 0.30, 0.50"]
    B --> C[/"Input assignment, midterm, final exam marks"/]
    C --> D["total = assignment*0.20 + midterm*0.30 + finalExam*0.50"]
    D --> E[/"Output course total (1 decimal)"/]
    E --> F{"total >= 50 ?"}
    F -- Yes --> G[/"Output Pass"/]
    F -- No --> H[/"Output Fail"/]
    G --> I([End])
    H --> I
~~~

## Task 2: Electricity bill

~~~mermaid
flowchart TD
    A([Start]) --> B["Declare variables and constants<br/>limit 50, rates 1.50 and 2.00, service 10.00"]
    B --> C[/"Input units"/]
    C --> D{"units <= 50 ?"}
    D -- Yes --> E["energy = units * 1.50"]
    D -- No --> F["energy = 50*1.50 + (units-50)*2.00"]
    E --> G["service = 10.00"]
    F --> G
    G --> H["total = energy + service"]
    H --> I[/"Output energy, service, total (2 decimals)"/]
    I --> J([End])
~~~

## Task 3: Trip speed and fuel cost

~~~mermaid
flowchart TD
    A([Start]) --> B["Declare variables and constants<br/>60 minutes per hour, 100 km base"]
    B --> C[/"Input distance, hours, minutes, fuel per 100 km, price per liter"/]
    C --> D["totalHours = hours + static_cast of minutes / 60"]
    D --> E["speed = distance / totalHours"]
    E --> F["fuelUsed = distance / 100 * fuelPer100"]
    F --> G["fuelCost = fuelUsed * pricePerLiter"]
    G --> H[/"Output speed, fuel used, fuel cost (2 decimals)"/]
    H --> I([End])
~~~
