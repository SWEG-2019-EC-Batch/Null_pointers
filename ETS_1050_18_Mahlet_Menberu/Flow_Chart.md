
# Task 1: Student Course Total

**Source Code:** [Student Course Total.cpp](./Student_course_total.cpp)

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Declare variables]
    B --> C[/Input assignment mark/]
    C --> D[/Input midterm mark/]
    D --> E[/Input final exam mark/]
    E --> F[Calculate weighted total]
    F --> G[Display total to 1 decimal place]
    G --> H{Is total >= 50?}
    H -->|Yes| I[/Display Pass/]
    H -->|No| J[/Display Fail/]
    I --> K([End])
    J --> K
```

---

# Task 2: Electricity Bill

**Source Code:** [Electricity Bill.cpp](./Electricity_bill.cpp)

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Declare variables]
    B --> C[/Input electricity units/]
    C --> D{Are units <= 50?}
    D -->|Yes| E[Calculate energy charge: units * 1.50]
    D -->|No| F[Calculate energy charge: 50 * 1.50 + remaining units * 2.00]
    E --> G[Set service charge to 10.00]
    F --> G
    G --> H[Calculate total bill]
    H --> I[Set output to 2 decimal places]
    I --> J[/Display energy charge/]
    J --> K[/Display service charge/]
    K --> L[/Display total bill/]
    L --> M([End])
```

---

# Task 3: Trip Speed and Fuel Cost

**Source Code:** [Trip Speed and Fuel Cost.cpp](./Trip_speed_and_fuel_cost.cpp)

## Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Declare variables]
    B --> C[/Input trip distance/]
    C --> D[/Input travel hours/]
    D --> E[/Input travel minutes/]
    E --> F[/Input fuel consumption/]
    F --> G[/Input fuel price/]
    G --> H[Convert travel time to hours]
    H --> I[Calculate average speed]
    I --> J[Calculate fuel used]
    J --> K[Calculate fuel cost]
    K --> L[Set output to 2 decimal places]
    L --> M[/Display average speed/]
    M --> N[/Display fuel used/]
    N --> O[/Display fuel cost/]
    O --> P([End])
```
