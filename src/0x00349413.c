/* Brute Force original Xbox XNET tagged four-byte payload forwarding.
 * Entry: 0x00349413
 * Input x86 body SHA-256: 3D6DE52EAEE73DCA453002F1885A0825D19DE948071E4DC585A321C52F8B7309
 * x86 evidence: callee FUN_00349366 uses ECX as hidden context; this
 * wrapper accepts two stack words, forwards the second's address with
 * length four and literal tag 0x5300, then returns with ret 8.
 * C11 + compiler-specific x86 thiscall model. Xbox linking unverified.
 */
#include <stdint.h>
#include <stddef.h>

#if defined(_MSC_VER) && defined(_M_IX86)
#define BF_X86_CONTEXTCALL __thiscall
#elif (defined(__GNUC__) || defined(__clang__)) && defined(__i386__)
#define BF_X86_CONTEXTCALL __attribute__((thiscall))
#else
#define BF_X86_CONTEXTCALL /* Analysis-only ABI model on other architectures. */
#endif

extern void BF_X86_CONTEXTCALL FUN_00349366(
    void *incoming_ecx_context, const void *first_stack_arg,
    uint16_t header_tag, const void *first_bytes,
    uint32_t first_byte_count, const void *second_bytes,
    uint32_t second_byte_count);

void BF_X86_CONTEXTCALL FUN_00349413(
    void *incoming_ecx_context, const void *first_stack_arg,
    uint32_t four_byte_payload_word)
{
    FUN_00349366(incoming_ecx_context, first_stack_arg,
                 UINT16_C(0x5300), &four_byte_payload_word,
                 UINT32_C(4), NULL, UINT32_C(0));
}
