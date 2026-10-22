/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19E031DCC13E402CCAA292D97485F1C23651B9ADF53AA43866285512AE9ECD06
 * Entry: 0x002526f0, Ghidra index: 8378, label: FUN_002526f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002526f0(void)

{
  uint *puVar1;
  int in_EAX;
  
  if ((in_EAX != 0) && (puVar1 = *(uint **)(in_EAX + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_0027e7f0();
    return 0;
  }
  return 0xfffffffe;
}
