/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3DE79D39040288D8F170DB9BB6C4BFB4139F26769978564D639533FBB995DE5
 * Entry: 0x0025e1b0, Ghidra index: 8588, label: FUN_0025e1b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s__s_s_s_0040dd8c[];
void FUN_0025e1b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  char *pcVar4;
  int *in_ECX;
  undefined4 *unaff_ESI;
  int *piVar5;
  undefined1 local_228 [32];
  char local_208 [260];
  undefined1 local_104 [260];
  
  unaff_ESI[0x46] = 0;
  unaff_ESI[0x48] = 0;
  unaff_ESI[0x49] = 0;
  unaff_ESI[0x4a] = 0;
  unaff_ESI[0x46] = *in_EAX;
  *unaff_ESI = 0;
  unaff_ESI[1] = *in_ECX - in_ECX[1];
  unaff_ESI[2] = 0;
  unaff_ESI[3] = in_ECX[1];
  if (in_ECX[2] < 1) {
    unaff_ESI[4] = 0;
  }
  else {
    uVar3 = thunk_FUN_002ea01d(in_ECX[2] * 0x14);
    unaff_ESI[4] = uVar3;
  }
  iVar2 = unaff_ESI[0x48];
  unaff_ESI[0x48] = in_ECX[0xb];
  in_ECX[0xb] = iVar2;
  iVar2 = unaff_ESI[0x49];
  unaff_ESI[0x49] = in_ECX[0xc];
  in_ECX[0xc] = iVar2;
  iVar2 = unaff_ESI[0x4a];
  unaff_ESI[0x4a] = in_ECX[0xd];
  in_ECX[0xd] = iVar2;
  FUN_002ea78d(param_1,local_228,local_104,0,0);
  if ((uint)in_ECX[9] < 0x10) {
    piVar5 = in_ECX + 4;
  }
  else {
    piVar5 = (int *)in_ECX[4];
  }
  FUN_002eaa19(local_208,0x104,s__s_s_s_0040dd8c,local_228,local_104,piVar5);
  pcVar4 = local_208;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)unaff_ESI + (0x14 - (int)local_208)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return;
}
