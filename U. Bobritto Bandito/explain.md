## U. Bobritto Bandito

### How I thought about it:

**Step 1: Understand the story**
- Day 0 → only house 0 is sick
- Each day → ONE more house gets sick (left or right)
- After n days → segment [l, r] is given
- Find segment after m days

**Step 2: What is size on day m?**
- Day 0 → size 1
- Day 1 → size 2
- Day m → size = m

**Step 3: Day m segment is INSIDE day n segment!**
- m comes before n
- Segment only grows → never shrinks
- So day m segment must fit inside [l, r]!

**Step 4: Find the left boundary**
- Two walls exist for left:
  - Wall 1: cannot go left of l (day n boundary!)
  - Wall 2: cannot go left of -m (only m days passed from house 0!)
  - Pick the MORE TO THE RIGHT one = max(l, -m)

**Step 5: Find right boundary**
- Size must be m
- right = left + m

### Solution:
```cpp
long long left = max(l, -m);
long long right = left + m;
cout << left << " " << right;
```