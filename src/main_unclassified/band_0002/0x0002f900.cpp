/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30C7C6E3E05D72515F4F652C64B75D230F9A22A79E63B5E219538DED47C450EB
 * Entry: 0x0002f900, Ghidra index: 313, label: FUN_0002f900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_0002f900(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x450) = 0;
  *(undefined4 *)(in_ECX + 0x44c) = 0;
  *(undefined4 *)(in_ECX + 0x448) = 0;
  FUN_0004e8f0();
  iVar1 = *(int *)(in_ECX + 0x4d0);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) & 0xfffffffe;
    }
    *(undefined4 *)(in_ECX + 0x4d0) = 0;
  }
  *(undefined1 *)(in_ECX + 0x85d) = 0;
  *(undefined4 *)(in_ECX + 0x860) = 0x3f800000;
  return 1;
}
