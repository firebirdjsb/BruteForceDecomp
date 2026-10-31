/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB2F8EE068D1306A23FFC4D571D65A4BB4D23E6B4CEE4503CE80A844CF2E09D9
 * Entry: 0x001a3300, Ghidra index: 5341, label: FUN_001a3300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two caller-owned guest DWORDs, ADD ESP,8 after direct CALL;
 * EAX/ECX inputs and linked host ABI remain ABI_UNVERIFIED. */
extern int FUN_0023a790(std::uint32_t guest_stack_word_0,
                        std::uint32_t guest_stack_word_1);
bool FUN_001a3300(void)

{
  int iVar1;
  
  iVar1 = FUN_0023a790(0x125c59b6,1);
  return iVar1 != 0;
}
