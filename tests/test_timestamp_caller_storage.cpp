/* Authored storage example, not either original caller or its native execution.
 * The mask is fixture-only instrumentation: it prevents the negative controls
 * from reading an unwritten word. It is not a production safety mechanism.
 * No clock instruction, hidden register input or game address is used here. */
#include "bf_ghidra_types.h"
#include <cstdio>
#include <cstdlib>
#include <type_traits>

static_assert(std::is_same<undefined4, std::uint32_t>::value, "DWORD type");
static_assert(sizeof(undefined4) == 4, "DWORD width");

static void require(bool value, const char *why)
{
  if (!value) {
    std::fprintf(stderr, "storage fixture: %s\n", why);
    std::exit(1);
  }
}

struct Scratch {
  undefined4 before;
  undefined4 words[2];
  undefined4 after;
};
static_assert(sizeof(Scratch::words) == 8, "two complete live DWORD objects");
static_assert(offsetof(Scratch, words) == 4 && offsetof(Scratch, after) == 12,
              "fixture sentinels bound the array, not a game object layout");

struct Observation {
  undefined4 low;
  undefined4 high;
  unsigned calls;
};

static void deterministic_producer(undefined4 *output, undefined4 low,
                                   undefined4 high, unsigned &written)
{
  volatile undefined4 *destination = output;
  destination[0] = low;
  written |= 1;
  destination[1] = high;
  written |= 2;
}

static Observation sample(bool enabled, undefined4 low, undefined4 high)
{
  Scratch scratch; // Deliberately no initialization of either output word.
  scratch.before = UINT32_C(0x13579bdf);
  scratch.after = UINT32_C(0x2468ace0);
  Observation result{UINT32_C(0x91725364), UINT32_C(0xa1b2c3d4), 0};
  unsigned written = 0;
  if (enabled) {
    deterministic_producer(&scratch.words[0], low, high, written);
    ++result.calls;
    require(written == 3, "producer did not initialize both output words");
    result.low = scratch.words[0];
    result.high = scratch.words[1];
  }
  require(scratch.before == UINT32_C(0x13579bdf), "leading sentinel");
  require(scratch.after == UINT32_C(0x2468ace0), "trailing sentinel");
  require(written == (enabled ? 3U : 0U), "inactive path accessed scratch");
  return result;
}

int main()
{
  unsigned cases = 0;
  const undefined4 edges[] = {0, 1, UINT32_C(0x7fffffff), UINT32_C(0x80000000),
                             UINT32_C(0xffffffff), UINT32_C(0x01234567),
                             UINT32_C(0x89abcdef)};
  for (auto low : edges) {
    for (auto high : edges) {
      // Both call/read and skipped-call/no-read paths use uninitialized scratch.
      for (unsigned enabled = 0; enabled != 2; ++enabled) {
        const auto got = sample(enabled != 0, low, high);
        require(got.calls == enabled, "call count");
        require(got.low == (enabled ? low : UINT32_C(0x91725364)), "low word");
        require(got.high == (enabled ? high : UINT32_C(0xa1b2c3d4)), "high word");
        ++cases;
      }
    }
  }
  // An independent 64-bit split oracle supplies distinguishable values.
  std::uint64_t state = UINT64_C(0x4d595df4d0f33173);
  for (unsigned i = 0; i != 4096; ++i) {
    state = state * UINT64_C(6364136223846793005) + UINT64_C(1442695040888963407);
    const auto low = static_cast<undefined4>(state & UINT64_C(0xffffffff));
    const auto high = static_cast<undefined4>(state / UINT64_C(0x100000000));
    const auto got = sample(true, low, high);
    require(got.calls == 1, "unconditional call count");
    require((static_cast<std::uint64_t>(got.high) << 32 | got.low) == state,
            "low/high correspondence");
    ++cases;
  }
  std::printf("PASS %u authored two-word storage cases\n", cases);
}
