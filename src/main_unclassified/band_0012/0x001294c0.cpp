/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08159E221FE881403A0D015D012CF95E575E6FBA23768C62BE0E41332FF2211E
 * Entry: 0x001294c0, Ghidra index: 3742, label: FUN_001294c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing void(void) source interface at 0x00129530, with implicit
 * guest EAX input; Xbox calling convention remains ABI_UNVERIFIED. */
extern void FUN_00129530(void);
void FUN_001294c0(void)

{
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x834) & 1) != 0) {
    *(byte *)(in_EAX + 0x834) = *(byte *)(in_EAX + 0x834) & 0xfc;
    FUN_00129530();
    return;
  }
  return;
}
