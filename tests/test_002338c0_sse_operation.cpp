/* Synthetic host-memory tests only. The oracle below is newly authored native
 * assembly, not extracted code, an original executable, or an Xbox ABI shim.
 * Its fixed registers and single assembly block are independent of the helper's
 * column/row decomposition, C++ temporaries, and scoped arithmetic primitives.
 */
#include "bf_002338c0_sse_operation.h"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

float *FUN_002338c0(float *, float *, float *);

__attribute__((noinline)) static void reference_sse(
    float *out, const float *left, const float *right)
{
    __asm__ volatile(
        "movss 0(%[right]), %%xmm4\n\t"
        "movhps 4(%[right]), %%xmm4\n\t"
        "movss 36(%[right]), %%xmm7\n\t"
        "shufps $225, %%xmm4, %%xmm4\n\t"
        "movss %%xmm7, %%xmm4\n\t"
        "movss 12(%[right]), %%xmm5\n\t"
        "movhps 16(%[right]), %%xmm5\n\t"
        "movss 40(%[right]), %%xmm7\n\t"
        "shufps $225, %%xmm5, %%xmm5\n\t"
        "movss %%xmm7, %%xmm5\n\t"
        "movss 24(%[right]), %%xmm6\n\t"
        "movhps 28(%[right]), %%xmm6\n\t"
        "movss 44(%[right]), %%xmm7\n\t"
        "shufps $225, %%xmm6, %%xmm6\n\t"
        "movss %%xmm7, %%xmm6\n\t"
        "movups 0(%[left]), %%xmm3\n\t"
        "movss %%xmm3, %%xmm0\n\t"
        "shufps $0, %%xmm0, %%xmm0\n\t"
        "mulps %%xmm4, %%xmm0\n\t"
        "movaps %%xmm3, %%xmm1\n\t"
        "shufps $85, %%xmm1, %%xmm1\n\t"
        "mulps %%xmm5, %%xmm1\n\t"
        "movaps %%xmm3, %%xmm2\n\t"
        "shufps $170, %%xmm2, %%xmm2\n\t"
        "addps %%xmm0, %%xmm1\n\t"
        "mulps %%xmm6, %%xmm2\n\t"
        "addps %%xmm1, %%xmm2\n\t"
        "addss 36(%[left]), %%xmm2\n\t"
        "movss %%xmm2, 36(%[out])\n\t"
        "shufps $225, %%xmm2, %%xmm2\n\t"
        "movss %%xmm2, 0(%[out])\n\t"
        "movhps %%xmm2, 4(%[out])\n\t"
        "movaps %%xmm3, %%xmm0\n\t"
        "shufps $255, %%xmm0, %%xmm0\n\t"
        "mulps %%xmm4, %%xmm0\n\t"
        "movups 16(%[left]), %%xmm3\n\t"
        "movss %%xmm3, %%xmm1\n\t"
        "shufps $0, %%xmm1, %%xmm1\n\t"
        "mulps %%xmm5, %%xmm1\n\t"
        "movaps %%xmm3, %%xmm2\n\t"
        "shufps $85, %%xmm2, %%xmm2\n\t"
        "mulps %%xmm6, %%xmm2\n\t"
        "addps %%xmm0, %%xmm1\n\t"
        "addps %%xmm1, %%xmm2\n\t"
        "addss 40(%[left]), %%xmm2\n\t"
        "movss %%xmm2, 40(%[out])\n\t"
        "shufps $225, %%xmm2, %%xmm2\n\t"
        "movss %%xmm2, 12(%[out])\n\t"
        "movhps %%xmm2, 16(%[out])\n\t"
        "movaps %%xmm3, %%xmm0\n\t"
        "shufps $170, %%xmm0, %%xmm0\n\t"
        "mulps %%xmm4, %%xmm0\n\t"
        "movaps %%xmm3, %%xmm1\n\t"
        "shufps $255, %%xmm1, %%xmm1\n\t"
        "mulps %%xmm5, %%xmm1\n\t"
        "movss 32(%[left]), %%xmm2\n\t"
        "shufps $0, %%xmm2, %%xmm2\n\t"
        "mulps %%xmm6, %%xmm2\n\t"
        "addps %%xmm0, %%xmm1\n\t"
        "addps %%xmm1, %%xmm2\n\t"
        "addss 44(%[left]), %%xmm2\n\t"
        "movss %%xmm2, 44(%[out])\n\t"
        "shufps $225, %%xmm2, %%xmm2\n\t"
        "movss %%xmm2, 24(%[out])\n\t"
        "movhps %%xmm2, 28(%[out])\n\t"
        : : [out] "r"(out), [left] "r"(left), [right] "r"(right)
        : "xmm0", "xmm1", "xmm2", "xmm3", "xmm4", "xmm5", "xmm6", "xmm7", "memory");
}

using Words = std::array<std::uint32_t, 96>;
struct Layout { unsigned out, left, right; };
static std::uint64_t state = UINT64_C(0x2338c0a6e4d2197b);
static std::uint32_t random_word()
{
    state ^= state << 13; state ^= state >> 7; state ^= state << 17;
    return static_cast<std::uint32_t>(state >> 16);
}
static std::uint32_t bits(float value)
{
    std::uint32_t word;
    std::memcpy(&word, &value, sizeof word);
    return word;
}
static std::uint32_t mxcsr_mask()
{
    struct alignas(16) State { unsigned char bytes[512]; } image{};
    __asm__ volatile("fxsave %0" : "=m"(image) : : "memory");
    std::uint32_t mask;
    std::memcpy(&mask, image.bytes + 28, sizeof mask);
    return mask == 0 ? UINT32_C(0xffbf) : mask;
}

static bool run_case(const Words &words, Layout p, std::uint32_t control,
                     bool canonical, std::uint64_t index)
{
    alignas(16) float actual[96], expected[96];
    std::memcpy(actual, words.data(), sizeof actual);
    std::memcpy(expected, words.data(), sizeof expected);
    _mm_setcsr(control);
    reference_sse(expected + p.out, expected + p.left, expected + p.right);
    const std::uint32_t reference_csr = _mm_getcsr();
    _mm_setcsr(control);
    if (canonical) {
        if (FUN_002338c0(actual + p.out, actual + p.left, actual + p.right) != actual + p.out)
            return false;
    } else {
        bf_002338c0_sse_operation(actual + p.out, actual + p.left, actual + p.right);
    }
    const std::uint32_t actual_csr = _mm_getcsr();
    if (actual_csr != reference_csr || std::memcmp(actual, expected, sizeof actual) != 0) {
        std::fprintf(stderr, "case=%llu offsets=%u,%u,%u mode=%08x wrapper=%d csr=%08x/%08x\n",
                     static_cast<unsigned long long>(index), p.out, p.left, p.right,
                     control, canonical, actual_csr, reference_csr);
        for (unsigned i = 0; i < 96; ++i)
            if (bits(actual[i]) != bits(expected[i]))
                std::fprintf(stderr, "word %u actual=%08x expected=%08x\n", i,
                             bits(actual[i]), bits(expected[i]));
        return false;
    }
    return true;
}

/* A separate exact-integer anchor catches shared lane/translation errors in
 * both the intrinsic implementation and the authored assembly oracle. */
static bool integer_anchor()
{
    float left[12], right[12], actual[12], expected[12];
    for (unsigned i = 0; i < 12; ++i) {
        left[i] = static_cast<float>(i + 1);
        right[i] = static_cast<float>(i + 13);
    }
    for (unsigned row = 0; row < 3; ++row) {
        for (unsigned column = 0; column < 3; ++column) {
            const unsigned a = row * 3 + 1;
            expected[row * 3 + column] = static_cast<float>(
                a * (column + 13) + (a + 1) * (column + 16) + (a + 2) * (column + 19));
        }
        const unsigned a = row * 3 + 1;
        expected[9 + row] = static_cast<float>(a * 22 + (a + 1) * 23 + (a + 2) * 24 + 10 + row);
    }
    reference_sse(actual, left, right);
    if (std::memcmp(actual, expected, sizeof actual) != 0) return false;
    bf_002338c0_sse_operation(actual, left, right);
    if (std::memcmp(actual, expected, sizeof actual) != 0) return false;
    for (unsigned i = 0; i < 12; ++i) right[i] = 0.0f;
    right[0] = right[4] = right[8] = 1.0f;
    reference_sse(actual, left, right);
    if (std::memcmp(actual, left, sizeof actual) != 0) return false;
    bf_002338c0_sse_operation(actual, left, right);
    return std::memcmp(actual, left, sizeof actual) == 0;
}

int main()
{
    const std::uint32_t saved = _mm_getcsr();
    struct Restore { std::uint32_t value; ~Restore() { _mm_setcsr(value); } } restore{saved};
    _mm_setcsr(0x1f80);
    if (!integer_anchor()) return 2;

    std::vector<Layout> layouts;
    for (unsigned alignment = 0; alignment < 4; ++alignment)
        layouts.push_back({8 + alignment, 32 + alignment, 64 + alignment});
    for (int delta = -11; delta <= 11; ++delta) {
        layouts.push_back({static_cast<unsigned>(32 + delta), 32, 64});
        layouts.push_back({static_cast<unsigned>(64 + delta), 8, 64});
        layouts.push_back({static_cast<unsigned>(32 + delta), 32, 32});
    }
    layouts.push_back({32, 28, 36});
    layouts.push_back({32, 36, 28});
    layouts.push_back({8, 32, 32});

    const std::uint32_t edges[] = {
        0x00000000, 0x80000000, 0x3f800000, 0xbf800000, 0x40000000, 0xc0000000,
        0x00000001, 0x80000001, 0x007fffff, 0x807fffff, 0x00800000, 0x80800000,
        0x7f7fffff, 0xff7fffff, 0x7f800000, 0xff800000,
        0x7fc00001, 0xffc12345, 0x7fc54321, 0xffc6789a,
        0x7f800001, 0xff812345, 0x7fa54321, 0xffa6789a,
        0x4b800000, 0xcb800000, 0x33800000, 0xb3800000, 0x3f800001, 0xbf800001};
    constexpr unsigned edge_count = sizeof edges / sizeof edges[0];
    std::vector<Words> inputs;
    for (unsigned shift = 0; shift < edge_count; ++shift) {
        Words constant{}, stripes{};
        for (unsigned i = 0; i < constant.size(); ++i) {
            constant[i] = edges[shift];
            stripes[i] = edges[(shift + i) % edge_count];
        }
        inputs.push_back(constant);
        inputs.push_back(stripes);
    }
    for (unsigned sample = 0; sample < 256; ++sample) {
        Words random{};
        for (std::uint32_t &word : random)
            word = sample % 2 == 0 ? random_word() : edges[random_word() % edge_count];
        inputs.push_back(random);
    }
    const std::uint32_t mask = mxcsr_mask();
    unsigned modes = 0;
    std::uint64_t cases = 0;
    for (unsigned rounding = 0; rounding < 4; ++rounding)
        for (unsigned ftz = 0; ftz < 2; ++ftz)
            for (unsigned daz = 0; daz < 2; ++daz) {
                const std::uint32_t control = 0x1f80 | (rounding << 13) | (ftz << 15) | (daz << 6);
                if ((control & ~mask) != 0) continue;
                ++modes;
                for (const Words &words : inputs) for (Layout layout : layouts) {
                    if (!run_case(words, layout, control, false, ++cases)) return 1;
                    if (!run_case(words, layout, control | 0x3f, true, ++cases)) return 1;
                }
            }
    std::printf("002338c0 host SSE: %llu bitwise memory/MXCSR comparisons; %u modes; %zu layouts; %zu inputs\n",
                static_cast<unsigned long long>(cases), modes, layouts.size(), inputs.size());
    return modes < 8 ? 3 : 0;
}
