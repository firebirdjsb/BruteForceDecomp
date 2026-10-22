/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D83E9A977CF468267AD8A035D5C0631BE931D0D8DFE2FE8EABED54447CEB4C0F
 * Entry: 0x0033d172, Ghidra index: 12574, label: FUN_0033d172
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094a;
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b0950;
void FUN_0033d172(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if (*(short *)(&DAT_004b094a + *in_ECX * 10) != 0) {
    FUN_0033bda0(0);
    iVar2 = in_ECX[3];
    piVar1 = in_ECX + 0x209;
    iVar3 = in_ECX[0x20b];
    iVar4 = in_ECX[0x20c];
    FUN_0033c404(iVar2,piVar1);
    *(int *)(iVar3 * 0x200 + iVar4 + iVar2 + 1) = in_ECX[0x211];
    FUN_0033bbd6(4);
    in_ECX[0x20a] = (uint)*(ushort *)(&DAT_004b094c + *in_ECX * 10);
    FUN_0033c130(param_1,piVar1,in_ECX[3]);
    if (param_2 == 0) {
      FUN_0033bbd6(*(undefined2 *)(&DAT_004b0950 + *in_ECX * 10));
      FUN_0033c44a(in_ECX[3],piVar1);
    }
    else {
      FUN_0033bbd6(*(undefined2 *)(&DAT_004b094c + *in_ECX * 10));
      in_ECX[0x20a] = *(ushort *)(&DAT_004b0950 + *in_ECX * 10) + 1;
      FUN_0033c44a(in_ECX[3],piVar1);
      FUN_0033c130(param_2,piVar1,in_ECX[3]);
    }
  }
  return;
}
