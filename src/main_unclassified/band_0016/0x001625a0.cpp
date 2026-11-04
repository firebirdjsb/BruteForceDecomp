/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A97D8D5508F4AAB986720E46EDDDD3922D954D7422D63D79F57CB2421A96A83
 * Entry: 0x001625a0, Ghidra index: 4637, label: FUN_001625a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x00162290 accesses guest EAX implicitly.
 * Original guest register/object ABI_UNVERIFIED. */
extern void FUN_00162290(void);
void FUN_001625a0(void)

{
  int unaff_ESI;
  
  FUN_00162290();
  *(undefined4 *)(unaff_ESI + 0x138) = 0;
  *(undefined4 *)(unaff_ESI + 0x140) = 0;
  *(undefined4 *)(unaff_ESI + 0x144) = 0;
  *(undefined4 *)(unaff_ESI + 0x14c) = 0;
  *(undefined4 *)(unaff_ESI + 0x150) = 0;
  *(undefined4 *)(unaff_ESI + 0x154) = 0;
  *(undefined4 *)(unaff_ESI + 0x170) = 0;
  *(undefined4 *)(unaff_ESI + 0x174) = 0;
  *(undefined4 *)(unaff_ESI + 0x178) = 0;
  *(undefined4 *)(unaff_ESI + 0x184) = 0;
  *(undefined4 *)(unaff_ESI + 0x188) = 0;
  *(undefined4 *)(unaff_ESI + 0x18c) = 0;
  *(undefined4 *)(unaff_ESI + 0x198) = 0;
  return;
}
