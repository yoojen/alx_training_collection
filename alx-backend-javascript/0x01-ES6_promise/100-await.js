import { uploadPhoto, createUser } from './utils'

export default async function asyncUploadUser() {
	let response = {};

	try {
		photo = await uploadPhoto();
		user = await createUser();
		response = { photo, user };
	} catch (error) {
		response = { photo: null, user: null, };
	}

	return response;
}
