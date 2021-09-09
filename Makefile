nothing:

import-pA:
	cmsImportTask -c 8 ./pA/ -u $(if $(s), , --no-statement)

import-pB:
	cmsImportTask -c 8 ./pB/ -u $(if $(s), , --no-statement)
