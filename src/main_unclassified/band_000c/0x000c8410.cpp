/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 008EEB0027D17646FF849A77F8655B6769A99F73DE759B6F57DDBDF10E97E868
 * Entry: 0x000c8410, Ghidra index: 2460, label: FUN_000c8410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000c8470(void);
extern void FUN_000c88c0(void);
extern void FUN_000c4d80(void);

undefined4 FUN_000c8410(void)

{
  char cVar1;
  
  cVar1 = FUN_000c8470();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_000c88c0();
  FUN_000c4d80();
  return 1;
}
