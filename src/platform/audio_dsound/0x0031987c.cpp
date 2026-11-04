/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19570A2AF28625B601F1488A30FA9A02D310268B724FA75B328E8066FD5DA4CD
 * Entry: 0x0031987c, Ghidra index: 12232, label: CMcpxBuffer_SetBufferData
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only; original Xbox ABI_UNVERIFIED. */
extern int FUN_00319589(void);
void DSOUND__CMcpxBuffer_SetBufferData(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x150) = 0;
  if ((*(byte *)(*(int *)(in_ECX + 0x88) + 10) & 4) == 0) {
    FUN_00319589();
    return;
  }
  return;
}
