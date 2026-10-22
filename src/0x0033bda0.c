/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CDE70E144B2BE4170CACDDAA2183B04BBE816F2F4468553AC63A2AE1D052538
 * Entry: 0x0033bda0, Ghidra index: 12537, label: FUN_0033bda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b0950;
bool FUN_0033bda0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  bool bVar3;
  
  bVar3 = param_1 < *(uint *)(in_ECX[5] + 4);
  if (bVar3) {
    uVar2 = ((uint)*(ushort *)(&DAT_004b0950 + *in_ECX * 10) +
             (uint)*(ushort *)(&DAT_004b094c + *in_ECX * 10) + 6) * param_1 + 0x18;
    uVar1 = (uint)*(ushort *)(&DAT_004b0950 + *in_ECX * 10) +
            (uint)*(ushort *)(&DAT_004b094c + *in_ECX * 10) + 5 + uVar2;
    in_ECX[0x20b] = uVar2 / 500;
    in_ECX[0x20c] = uVar2 % 500;
    in_ECX[0x20a] = (uVar1 - uVar2) + 1;
    in_ECX[0x20d] = uVar1 / 500;
    in_ECX[0x209] = param_1;
    in_ECX[0x20e] = uVar1 % 500;
  }
  return bVar3;
}
