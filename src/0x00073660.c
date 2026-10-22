/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A03D9416670D8C5E863F19752916622649EAAA44DADF780F59684196A0B70D59
 * Entry: 0x00073660, Ghidra index: 1303, label: FUN_00073660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00073660(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  *in_EAX = param_1;
  *(undefined1 *)(in_EAX + 1) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0x461c4000;
  in_EAX[3] = 0xc61c4000;
  in_EAX[2] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = in_EAX[3];
  in_EAX[7] = 0;
  return;
}
