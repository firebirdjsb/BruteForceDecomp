/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BE2F9F7658DF813FDA3281E539459F43057F12119B6A630C64FC5444BA41840
 * Entry: 0x000f5510, Ghidra index: 3074, label: FUN_000f5510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f5510(int param_1)

{
  int iVar1;
  wchar_t *__s2;
  int *piVar2;
  wchar_t *__s1;
  /* Original 0x000F557A LEA ECX,[ESP+0x10] addresses the FIRST
   * incoming 32-bit argument slot (entry ESP+4), not a host local.
   * 0x000F557E overwrites that slot with 0xE0F733FD immediately
   * before the vtable +8 call.  The earlier 0xF0068D51 write and
   * EBX register input to 0x001E97C0, as well as the upper bytes
   * of the local flag, still require separate ABI reconstruction. */
  uint32_t guest_first_arg_word;
  
  param_1 = param_1 + 0xc;
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(param_1,0);
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x18) < 8) {
      __s1 = (wchar_t *)(iVar1 + 4);
    }
    else {
      __s1 = *(wchar_t **)(iVar1 + 4);
    }
    __s2 = (wchar_t *)FUN_001e97c0();
    iVar1 = _wcscmp(__s1,__s2);
    if (iVar1 == 0) {
      param_1 = 1;
      piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))(1);
      guest_first_arg_word = UINT32_C(0xe0f733fd);
      (**(code **)(*piVar2 + 8))(&guest_first_arg_word,0,0);
    }
  }
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x15c))(param_1);
  return;
}
